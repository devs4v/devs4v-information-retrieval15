#ifndef org_apache_lucene_util_AttributeSource_H
#define org_apache_lucene_util_AttributeSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource$State;
        class AttributeFactory;
        class Attribute;
        class AttributeReflector;
        class AttributeImpl;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Iterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeSource : public ::java::lang::Object {
        public:
          enum {
            mid_init$_54c6a166,
            mid_init$_a5f989be,
            mid_addAttribute_2e7bf8aa,
            mid_addAttributeImpl_d86caa9f,
            mid_captureState_0f9ed4d4,
            mid_clearAttributes_54c6a166,
            mid_cloneAttributes_f901022b,
            mid_copyTo_aea2d6ea,
            mid_equals_290588e2,
            mid_getAttribute_2e7bf8aa,
            mid_getAttributeClassesIterator_40858c90,
            mid_getAttributeFactory_bb394e5b,
            mid_getAttributeImplsIterator_40858c90,
            mid_hasAttribute_a5deaff8,
            mid_hasAttributes_54c6a16a,
            mid_hashCode_54c6a179,
            mid_reflectAsString_445a175e,
            mid_reflectWith_5f3f5102,
            mid_restoreState_b31fff69,
            mid_toString_14c7b5c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          AttributeSource(const AttributeSource& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::util::AttributeFactory *DEFAULT_ATTRIBUTE_FACTORY;

          AttributeSource();
          AttributeSource(const ::org::apache::lucene::util::AttributeFactory &);

          ::org::apache::lucene::util::Attribute addAttribute(const ::java::lang::Class &) const;
          void addAttributeImpl(const ::org::apache::lucene::util::AttributeImpl &) const;
          ::org::apache::lucene::util::AttributeSource$State captureState() const;
          void clearAttributes() const;
          AttributeSource cloneAttributes() const;
          void copyTo(const AttributeSource &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::Attribute getAttribute(const ::java::lang::Class &) const;
          ::java::util::Iterator getAttributeClassesIterator() const;
          ::org::apache::lucene::util::AttributeFactory getAttributeFactory() const;
          ::java::util::Iterator getAttributeImplsIterator() const;
          jboolean hasAttribute(const ::java::lang::Class &) const;
          jboolean hasAttributes() const;
          jint hashCode() const;
          ::java::lang::String reflectAsString(jboolean) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void restoreState(const ::org::apache::lucene::util::AttributeSource$State &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyTypeObject PY_TYPE(AttributeSource);

        class t_AttributeSource {
        public:
          PyObject_HEAD
          AttributeSource object;
          static PyObject *wrap_Object(const AttributeSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
