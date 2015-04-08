#ifndef org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace vectorhighlight {
          class FieldFragList$WeightedFragInfo;
          class FragmentsBuilder;
          class FieldFragList;
        }
        namespace highlight {
          class Encoder;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class BaseFragmentsBuilder : public ::java::lang::Object {
          public:
            enum {
              mid_createFragment_dbdbadf3,
              mid_createFragment_4ae15401,
              mid_createFragments_b5534699,
              mid_createFragments_a6aed56f,
              mid_getMultiValuedSeparator_54c6a173,
              mid_getWeightedFragInfoList_4f378251,
              mid_isDiscreteMultiValueHighlighting_54c6a16a,
              mid_setDiscreteMultiValueHighlighting_bb0c767f,
              mid_setMultiValuedSeparator_87fd545a,
              mid_getFields_cc0d693c,
              mid_discreteMultiValueHighlighting_d191731d,
              mid_makeFragment_b70fa26e,
              mid_getFragmentSourceMSO_a32be9ad,
              mid_getFragmentSource_771056c3,
              mid_getPreTag_64aeb14d,
              mid_getPreTag_141401b3,
              mid_getPostTag_64aeb14d,
              mid_getPostTag_141401b3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseFragmentsBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            BaseFragmentsBuilder(const BaseFragmentsBuilder& obj) : ::java::lang::Object(obj) {}

            static JArray< ::java::lang::String > *COLORED_POST_TAGS;
            static JArray< ::java::lang::String > *COLORED_PRE_TAGS;

            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &) const;
            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            jchar getMultiValuedSeparator() const;
            ::java::util::List getWeightedFragInfoList(const ::java::util::List &) const;
            jboolean isDiscreteMultiValueHighlighting() const;
            void setDiscreteMultiValueHighlighting(jboolean) const;
            void setMultiValuedSeparator(jchar) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          extern PyTypeObject PY_TYPE(BaseFragmentsBuilder);

          class t_BaseFragmentsBuilder {
          public:
            PyObject_HEAD
            BaseFragmentsBuilder object;
            static PyObject *wrap_Object(const BaseFragmentsBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
