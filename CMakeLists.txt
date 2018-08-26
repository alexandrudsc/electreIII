cmake_minimum_required (VERSION 3.0)
project (electre)
include_directories(models)
include_directories(controllers)
include_directories(views)

add_library(electre
  models/AlternativeManager.cpp
  models/Alternative.cpp
  models/CriteriaManager.cpp
  models/Criteria.cpp
  controllers/E3Controller.cpp
  controllers/Compute.cpp
)



add_executable(electre-app 
  views/Views.cpp
  test/testView.cpp
  test/testCriteriaManager.cpp
  test/testAlternativeManager.cpp
  test/testmodels.cpp
  main.cpp
)
target_link_libraries(electre-app
  electre
)  
