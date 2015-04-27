#ifndef org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilterFactory_H
#define org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class ResourceLoader;
          class ResourceLoaderAware;
        }
        class TokenStream;
        namespace compound {
          class HyphenationCompoundWordTokenFilter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {

          class HyphenationCompoundWordTokenFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
          public:
            enum {
              mid_init$_4c9e2b1c,
              mid_create_bdbb32a7,
              mid_inform_d6a4bc97,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HyphenationCompoundWordTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            HyphenationCompoundWordTokenFilterFactory(const HyphenationCompoundWordTokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            HyphenationCompoundWordTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::compound::HyphenationCompoundWordTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
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
      namespace analysis {
        namespace compound {
          extern PyTypeObject PY_TYPE(HyphenationCompoundWordTokenFilterFactory);

          class t_HyphenationCompoundWordTokenFilterFactory {
          public:
            PyObject_HEAD
            HyphenationCompoundWordTokenFilterFactory object;
            static PyObject *wrap_Object(const HyphenationCompoundWordTokenFilterFactory&);
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
