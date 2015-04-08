#ifndef org_apache_lucene_search_postingshighlight_DefaultPassageFormatter_H
#define org_apache_lucene_search_postingshighlight_DefaultPassageFormatter_H

#include "org/apache/lucene/search/postingshighlight/PassageFormatter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace postingshighlight {
          class Passage;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace postingshighlight {

          class DefaultPassageFormatter : public ::org::apache::lucene::search::postingshighlight::PassageFormatter {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_7f8a9869,
              mid_format_4b42952e,
              mid_append_5cdac082,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultPassageFormatter(jobject obj) : ::org::apache::lucene::search::postingshighlight::PassageFormatter(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DefaultPassageFormatter(const DefaultPassageFormatter& obj) : ::org::apache::lucene::search::postingshighlight::PassageFormatter(obj) {}

            DefaultPassageFormatter();
            DefaultPassageFormatter(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean);

            ::java::lang::String format(const JArray< ::org::apache::lucene::search::postingshighlight::Passage > &, const ::java::lang::String &) const;
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
        namespace postingshighlight {
          extern PyTypeObject PY_TYPE(DefaultPassageFormatter);

          class t_DefaultPassageFormatter {
          public:
            PyObject_HEAD
            DefaultPassageFormatter object;
            static PyObject *wrap_Object(const DefaultPassageFormatter&);
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
