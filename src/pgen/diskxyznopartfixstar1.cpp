--- src/pgen/diskxyznopartfixstar1.cpp
+++ src/pgen/diskxyznopartfixstar1.cpp
@@ -358,6 +358,7 @@
   // Some code
   // The code that needs fixing
   auto value = someStruct->someMember;
 
+  // missing semicolon here
+
   if (condition) {
       // some logic that might fail
   }
@@ -361,6 +362,7 @@
   // Some code
   // The code that needs fixing
   auto value = someStruct->someMember;
 
+  // missing semicolon here
+
   if (condition) {
       // some logic that might fail
   }
@@ -504,7 +507,7 @@
   // Code logic here
   auto result = somePointer->getValue();
   result += somePointer->getOtherValue();
-  if (result > 10) {
+  if (result > 10) {
-       somePointer->setFlag(true);
+       somePointer.setFlag(true);
   }
@@ -862,7 +865,7 @@
   if (userInput == "someString") {
-       // do something
+       if (std::strcmp(userInput.c_str(), "someString") == 0) {
           // do something
       }
   }