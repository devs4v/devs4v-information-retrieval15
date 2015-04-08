#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Deque;
    class Set;
    class Comparator;
    class Iterator;
    class Map;
    class ArrayList;
    class Random;
    class List;
    class Collection;
    class SortedSet;
    class Enumeration;
    class Queue;
    class ListIterator;
    class SortedMap;
  }
  namespace lang {
    class Comparable;
    class Boolean;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Collections : public ::java::lang::Object {
    public:
      enum {
        mid_addAll_7d28570f,
        mid_asLifoQueue_69ff1ef4,
        mid_binarySearch_632fb920,
        mid_binarySearch_b1262297,
        mid_checkedCollection_cdb515a1,
        mid_checkedList_8575df61,
        mid_checkedMap_92913187,
        mid_checkedSet_0862698d,
        mid_checkedSortedMap_5e4bff0f,
        mid_checkedSortedSet_342d53e3,
        mid_copy_cbe63a12,
        mid_disjoint_05108b4e,
        mid_emptyEnumeration_39f88070,
        mid_emptyIterator_40858c90,
        mid_emptyList_87851566,
        mid_emptyListIterator_b5be4e14,
        mid_emptyMap_db60befd,
        mid_emptySet_03e99967,
        mid_enumeration_8f4c58e7,
        mid_fill_632fb93f,
        mid_frequency_6b08c59a,
        mid_indexOfSubList_cbe63a0d,
        mid_lastIndexOfSubList_cbe63a0d,
        mid_list_0729353f,
        mid_max_abd1a366,
        mid_max_24cad27f,
        mid_min_abd1a366,
        mid_min_24cad27f,
        mid_nCopies_a26611d0,
        mid_newSetFromMap_d56f8575,
        mid_replaceAll_37ceb42b,
        mid_reverse_1fde8fc3,
        mid_reverseOrder_5a7ff2fc,
        mid_reverseOrder_4ed2c59d,
        mid_rotate_fff63b2f,
        mid_shuffle_1fde8fc3,
        mid_shuffle_06ba5e4b,
        mid_singleton_4c6d62c3,
        mid_singletonList_71371966,
        mid_singletonMap_65580ae9,
        mid_sort_1fde8fc3,
        mid_sort_b59215b8,
        mid_swap_d5c0aeaf,
        mid_synchronizedCollection_55c0b625,
        mid_synchronizedList_4f378251,
        mid_synchronizedMap_c606628b,
        mid_synchronizedSet_390c573f,
        mid_synchronizedSortedMap_93ac548b,
        mid_synchronizedSortedSet_b705ec3b,
        mid_unmodifiableCollection_55c0b625,
        mid_unmodifiableList_4f378251,
        mid_unmodifiableMap_c606628b,
        mid_unmodifiableSet_390c573f,
        mid_unmodifiableSortedMap_93ac548b,
        mid_unmodifiableSortedSet_b705ec3b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collections(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL)
          env->getClass(initializeClass);
      }
      Collections(const Collections& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List *EMPTY_LIST;
      static ::java::util::Map *EMPTY_MAP;
      static ::java::util::Set *EMPTY_SET;

      static jboolean addAll(const ::java::util::Collection &, const JArray< ::java::lang::Object > &);
      static ::java::util::Queue asLifoQueue(const ::java::util::Deque &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static ::java::util::Collection checkedCollection(const ::java::util::Collection &, const ::java::lang::Class &);
      static ::java::util::List checkedList(const ::java::util::List &, const ::java::lang::Class &);
      static ::java::util::Map checkedMap(const ::java::util::Map &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::Set checkedSet(const ::java::util::Set &, const ::java::lang::Class &);
      static ::java::util::SortedMap checkedSortedMap(const ::java::util::SortedMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::SortedSet checkedSortedSet(const ::java::util::SortedSet &, const ::java::lang::Class &);
      static void copy(const ::java::util::List &, const ::java::util::List &);
      static jboolean disjoint(const ::java::util::Collection &, const ::java::util::Collection &);
      static ::java::util::Enumeration emptyEnumeration();
      static ::java::util::Iterator emptyIterator();
      static ::java::util::List emptyList();
      static ::java::util::ListIterator emptyListIterator();
      static ::java::util::Map emptyMap();
      static ::java::util::Set emptySet();
      static ::java::util::Enumeration enumeration(const ::java::util::Collection &);
      static void fill(const ::java::util::List &, const ::java::lang::Object &);
      static jint frequency(const ::java::util::Collection &, const ::java::lang::Object &);
      static jint indexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static jint lastIndexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static ::java::util::ArrayList list(const ::java::util::Enumeration &);
      static ::java::lang::Object max$(const ::java::util::Collection &);
      static ::java::lang::Object max$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::lang::Object min$(const ::java::util::Collection &);
      static ::java::lang::Object min$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::util::List nCopies(jint, const ::java::lang::Object &);
      static ::java::util::Set newSetFromMap(const ::java::util::Map &);
      static jboolean replaceAll(const ::java::util::List &, const ::java::lang::Object &, const ::java::lang::Object &);
      static void reverse(const ::java::util::List &);
      static ::java::util::Comparator reverseOrder();
      static ::java::util::Comparator reverseOrder(const ::java::util::Comparator &);
      static void rotate(const ::java::util::List &, jint);
      static void shuffle(const ::java::util::List &);
      static void shuffle(const ::java::util::List &, const ::java::util::Random &);
      static ::java::util::Set singleton(const ::java::lang::Object &);
      static ::java::util::List singletonList(const ::java::lang::Object &);
      static ::java::util::Map singletonMap(const ::java::lang::Object &, const ::java::lang::Object &);
      static void sort(const ::java::util::List &);
      static void sort(const ::java::util::List &, const ::java::util::Comparator &);
      static void swap(const ::java::util::List &, jint, jint);
      static ::java::util::Collection synchronizedCollection(const ::java::util::Collection &);
      static ::java::util::List synchronizedList(const ::java::util::List &);
      static ::java::util::Map synchronizedMap(const ::java::util::Map &);
      static ::java::util::Set synchronizedSet(const ::java::util::Set &);
      static ::java::util::SortedMap synchronizedSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet synchronizedSortedSet(const ::java::util::SortedSet &);
      static ::java::util::Collection unmodifiableCollection(const ::java::util::Collection &);
      static ::java::util::List unmodifiableList(const ::java::util::List &);
      static ::java::util::Map unmodifiableMap(const ::java::util::Map &);
      static ::java::util::Set unmodifiableSet(const ::java::util::Set &);
      static ::java::util::SortedMap unmodifiableSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet unmodifiableSortedSet(const ::java::util::SortedSet &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyTypeObject PY_TYPE(Collections);

    class t_Collections {
    public:
      PyObject_HEAD
      Collections object;
      static PyObject *wrap_Object(const Collections&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
