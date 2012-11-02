This project is to demonstrate Extension Object Pattern. Extension Object Pattern is to anticipate that an object's interface needs to be extended in the future. Additional interfaces are defined by extension objects. This pattern is introduced by [Erich Gamma](http://en.wikipedia.org/wiki/Erich_Gamma). For more detail, see his paper, [The Extension Objects Pattern](http://st.inf.tu-dresden.de/Lehre/WS06-07/dpf/gamma96.pdf).

The sample code is used in the presentation of [CSE776 Design Pattern](http://www.lcs.syr.edu/faculty/fawcett/handouts/webpages/CSE776.htm) course, Syracuse University.

This sample is a Visual Studio 2010 project, including five projects, discussing the skeleton and implementation issues.

##Skeleton##

A skeleton of Extension Object Pattern.

##RttiExtension##

Demostrate how to implement Runtime Type Information to identify extensions. 

The discussion is in the "Implementation/Identifying extensions" section of Gamma's paper.

##ExternalExtension##

Demostrate how to deal with the situation concrete subject doesn't known its concrete extensions. 

The deisscussion is in the "Implementation/Internal vs. Extenal extensions" section of Gamma's paper.

##SmartExtnesion##

Demostrate a solution to control extension objects lifetime by using reference counter. 

The discussion is in the "Implementation/Freeing Extension Objects" section of Gamma's paper.

##Story##

A sample of how Extension Object Pattern works.