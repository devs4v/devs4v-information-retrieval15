#ifndef org_apache_lucene_analysis_wikipedia_WikipediaTokenizer_H
#define org_apache_lucene_analysis_wikipedia_WikipediaTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
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
    class Set;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace wikipedia {

          class WikipediaTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
          public:
            enum {
              mid_init$_cf2e3c10,
              mid_init$_ef926df6,
              mid_init$_60b8ae4e,
              mid_close_54c6a166,
              mid_end_54c6a166,
              mid_incrementToken_54c6a16a,
              mid_reset_54c6a166,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WikipediaTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            WikipediaTokenizer(const WikipediaTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint ACRONYM_ID;
            static jint ALPHANUM_ID;
            static jint APOSTROPHE_ID;
            static ::java::lang::String *BOLD;
            static jint BOLD_ID;
            static ::java::lang::String *BOLD_ITALICS;
            static jint BOLD_ITALICS_ID;
            static jint BOTH;
            static ::java::lang::String *CATEGORY;
            static jint CATEGORY_ID;
            static ::java::lang::String *CITATION;
            static jint CITATION_ID;
            static jint CJ_ID;
            static jint COMPANY_ID;
            static jint EMAIL_ID;
            static ::java::lang::String *EXTERNAL_LINK;
            static jint EXTERNAL_LINK_ID;
            static ::java::lang::String *EXTERNAL_LINK_URL;
            static jint EXTERNAL_LINK_URL_ID;
            static ::java::lang::String *HEADING;
            static jint HEADING_ID;
            static jint HOST_ID;
            static ::java::lang::String *INTERNAL_LINK;
            static jint INTERNAL_LINK_ID;
            static ::java::lang::String *ITALICS;
            static jint ITALICS_ID;
            static jint NUM_ID;
            static ::java::lang::String *SUB_HEADING;
            static jint SUB_HEADING_ID;
            static jint TOKENS_ONLY;
            static JArray< ::java::lang::String > *TOKEN_TYPES;
            static jint UNTOKENIZED_ONLY;
            static jint UNTOKENIZED_TOKEN_FLAG;

            WikipediaTokenizer(const ::java::io::Reader &);
            WikipediaTokenizer(const ::java::io::Reader &, jint, const ::java::util::Set &);
            WikipediaTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::io::Reader &, jint, const ::java::util::Set &);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
        namespace wikipedia {
          extern PyTypeObject PY_TYPE(WikipediaTokenizer);

          class t_WikipediaTokenizer {
          public:
            PyObject_HEAD
            WikipediaTokenizer object;
            static PyObject *wrap_Object(const WikipediaTokenizer&);
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
