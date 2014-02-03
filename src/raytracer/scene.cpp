#include "scene.h"

Scene::Scene(Camera &cam) 
    : camera(cam) {
    objects = new vector<Object*>();
}

Scene::~Scene() {
    vector<Object*>::iterator it;
    for(it = objects->begin(); it != objects->end(); ++it) 
        delete *it;
    delete objects;
}

void Scene::AddObject(Object* object) {
    objects->push_back(object);
}

bool Scene::Intersect(const Ray& ray, Intersection *isect) const {
    vector<Object*>::iterator it;
    bool hit = false;

    for(it = objects->begin(); it != objects->end(); ++it) {
        Ray rt;
        
        rt.o = (*it)->transform * ray.o;
        rt.d = (*it)->transform * ray.d;
        rt.d = rt.d.Normalize();
        hit |= (*it)->Intersect(rt, isect);
    }

    return hit;
}

const Camera& Scene::SceneCamera() const {
    return camera;
}