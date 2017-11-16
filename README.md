# Lassy
<p>
Lassy is a C++ library with a visualisation framework for interrogating a 3D image using surface normals. 
  
A 2D surface mesh is created in the 3D image. Surface normals of this 2D surface mesh are used for interrogating pixels and intensities of the 3D image. A simple example application of this library would be to interrograte the image intensities along the surface normal of a 3D binary mask. 

<img align="right" src="http://catlikecoding.com/unity/tutorials/noise-derivatives/05-mesh-normals.png" width="250">

It was developed with specific scientific research applications in mind, in particular for interrogating the CT or MRI of the human heart. This limits it to only 3D images and meshes that are stored in a certain format. 

The 3D images are expected to be in the medical image formats: NifTII, NRRD, Analyze and GIPL. The meshes can be in [VTK](https://www.vtk.org/) format. 

It is being currently developed for visualising pixel enhancments in MRI imaging in [cardiac imaging research](https://wwwhomes.doc.ic.ac.uk/~rkarim/mediawiki/index.php?title=Research_Wiki)
</p>

## Dependencies 
This library has some dependencies as it requires to perform 3D medical image processing and process 3D surface meshes. For these purposes, it depends on the [Image Registration Toolkit (ITK)](https://itk.org/) and the [Visulisation Toolkit](https://www.vtk.org/). Both are open-source and written in C++. VTK is released under the 3-Clause BSD license and ITK was released under the Apache 2.0 license. 

## Usage
<p>
<img align="right" src="https://wwwhomes.doc.ic.ac.uk/~rkarim/mediawiki/images/3/36/Lassy_preview.PNG" width="250">

It contains a tool that can be used to interrogate late gadolinium enhancement CMR images of the ventricular myocardium. 
</p>
It takes input parameters such as:  

```-i``` Ventricular myocardial shell in VTK format 

## Platforms 
Lassy has been tested on Windows 7 on Visual Studio 2015 and MacOS Sierra 10.12 running native g++ compilers. 

## Author 

```
Dr. Rashed Karim 
Department of Biomedical Engineering 
King's College London 
```
