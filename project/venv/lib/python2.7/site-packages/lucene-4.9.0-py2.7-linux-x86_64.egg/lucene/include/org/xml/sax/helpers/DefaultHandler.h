#ifndef org_xml_sax_helpers_DefaultHandler_H
#define org_xml_sax_helpers_DefaultHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {

        class DefaultHandler : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_characters_6f0bb356,
            mid_endDocument_54c6a166,
            mid_endElement_9c119564,
            mid_endPrefixMapping_5fdc3f48,
            mid_ignorableWhitespace_6f0bb356,
            mid_notationDecl_9c119564,
            mid_processingInstruction_4a264742,
            mid_skippedEntity_5fdc3f48,
            mid_startDocument_54c6a166,
            mid_startPrefixMapping_4a264742,
            mid_unparsedEntityDecl_3202cd2e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DefaultHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          DefaultHandler(const DefaultHandler& obj) : ::java::lang::Object(obj) {}

          DefaultHandler();

          void characters(const JArray< jchar > &, jint, jint) const;
          void endDocument() const;
          void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void endPrefixMapping(const ::java::lang::String &) const;
          void ignorableWhitespace(const JArray< jchar > &, jint, jint) const;
          void notationDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void processingInstruction(const ::java::lang::String &, const ::java::lang::String &) const;
          void skippedEntity(const ::java::lang::String &) const;
          void startDocument() const;
          void startPrefixMapping(const ::java::lang::String &, const ::java::lang::String &) const;
          void unparsedEntityDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {
        extern PyTypeObject PY_TYPE(DefaultHandler);

        class t_DefaultHandler {
        public:
          PyObject_HEAD
          DefaultHandler object;
          static PyObject *wrap_Object(const DefaultHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
