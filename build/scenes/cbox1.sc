version 0.9.2
# test scene
camera lens(0.08) focus(1.5) p(0.0, 2.5, -4.0) la(0.0, 2.5, 0.0) res(640, 480)

# spheres
object:s p(2.5, 1.0, 2.5) e(0.0, 0.0, 0.0) c(0.85, 1.0, 0.9) material:d
object:s p(-2.0, 1.0, 0.5) e(0.0, 0.0, 0.0) c(0.5, 0.5, 0.5) material:s
object:s p(0.0, 4.5, 0.0) e(5.0, 5.0, 5.0) c(1.0, 1.0, 1.0) material:s

# floor plane
object:p p(0.0, 0.0, 0.0) e(0.0, 0.0, 0.0) c(0.88, 0.85, 0.78) material:d

# meshes
mesh:obj/plane1.obj p(0.0, 0.0, 0.0) e(0.0, 0.0, 0.0) c(1.0, 1.0, 1.0) material:d
mesh:obj/plane2.obj p(0.0, 0.0, 0.0) e(0.0, 0.0, 0.0) c(0.41, 0.21, 0.35) material:d
mesh:obj/plane3.obj p(0.0, 0.0, 0.0) e(0.0, 0.0, 0.0) c(0.81, 0.29, 0.0) material:d
