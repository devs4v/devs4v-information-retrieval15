#ifndef org_apache_lucene_search_spell_WordBreakSpellChecker_H
#define org_apache_lucene_search_spell_WordBreakSpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        namespace spell {
          class SuggestMode;
          class SuggestWord;
          class CombineSuggestion;
          class WordBreakSpellChecker$BreakSuggestionSortMethod;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
        namespace spell {

          class WordBreakSpellChecker : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getMaxChanges_54c6a179,
              mid_getMaxCombineWordLength_54c6a179,
              mid_getMaxEvaluations_54c6a179,
              mid_getMinBreakWordLength_54c6a179,
              mid_getMinSuggestionFrequency_54c6a179,
              mid_setMaxChanges_39c7bd3c,
              mid_setMaxCombineWordLength_39c7bd3c,
              mid_setMaxEvaluations_39c7bd3c,
              mid_setMinBreakWordLength_39c7bd3c,
              mid_setMinSuggestionFrequency_39c7bd3c,
              mid_suggestWordBreaks_50deeffc,
              mid_suggestWordCombinations_6d229e7f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordBreakSpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            WordBreakSpellChecker(const WordBreakSpellChecker& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::index::Term *SEPARATOR_TERM;

            WordBreakSpellChecker();

            jint getMaxChanges() const;
            jint getMaxCombineWordLength() const;
            jint getMaxEvaluations() const;
            jint getMinBreakWordLength() const;
            jint getMinSuggestionFrequency() const;
            void setMaxChanges(jint) const;
            void setMaxCombineWordLength(jint) const;
            void setMaxEvaluations(jint) const;
            void setMinBreakWordLength(jint) const;
            void setMinSuggestionFrequency(jint) const;
            JArray< JArray< ::org::apache::lucene::search::spell::SuggestWord > > suggestWordBreaks(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &, const ::org::apache::lucene::search::spell::WordBreakSpellChecker$BreakSuggestionSortMethod &) const;
            JArray< ::org::apache::lucene::search::spell::CombineSuggestion > suggestWordCombinations(const JArray< ::org::apache::lucene::index::Term > &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
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
        namespace spell {
          extern PyTypeObject PY_TYPE(WordBreakSpellChecker);

          class t_WordBreakSpellChecker {
          public:
            PyObject_HEAD
            WordBreakSpellChecker object;
            static PyObject *wrap_Object(const WordBreakSpellChecker&);
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
