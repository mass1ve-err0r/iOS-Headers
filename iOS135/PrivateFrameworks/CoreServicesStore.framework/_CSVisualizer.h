/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
 */

@interface _CSVisualizer : NSObject {
    NSMutableDictionary * _handlers;
    NSRecursiveLock * _lock;
    const struct __CSStore { } * _store;
    NSMutableDictionary * _userInfo;
}

@property (readonly) const struct __CSStore { }*store;
@property (readonly) NSMutableDictionary *userInfo;

+ (id)URLForUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
+ (void)breakDownTable:(const struct Table { struct Unit { unsigned int x_1_1_1 : 30; unsigned int x_1_1_2 : 2; unsigned int x_1_1_3; BOOL x_1_1_4[0]; } x1; BOOL x2[48]; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*)arg1 inStore:(const struct Store { id x1; struct array<unsigned int, 64> { unsigned int x_2_1_1[64]; } x2; struct Table {} *x3; struct Table {} *x4; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > { _Atomic long long x_1_2_1; } x_5_1_1; } x5; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > { _Atomic long long x_1_2_1; } x_6_1_1; } x6; struct Pedigree { unsigned long long x_7_1_1; struct optional<unsigned int> { union { BOOL x_1_3_1; unsigned int x_1_3_2; } x_2_2_1; bool x_2_2_2; } x_7_1_2; } x7; }*)arg2 buffer:(char *)arg3;
+ (void)enumerateReferencesToUnitsInUnitDescription:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateValuesForTitlesInDescription:(id)arg1 block:(id /* block */)arg2;
+ (bool)getUnit:(unsigned int*)arg1 inTable:(unsigned int*)arg2 fromURL:(id)arg3;
+ (id)new;
+ (id)predicateForSearchingDescriptionWithString:(id)arg1 error:(id*)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfValueForTitle:(id)arg1 inDescription:(id)arg2;
+ (bool)unitDescription:(id)arg1 referencesUnit:(unsigned int)arg2 inTable:(unsigned int)arg3;

- (void).cxx_destruct;
- (id)breakDownUsage;
- (void)dealloc;
- (id)descriptionOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (void)enumerateReferencesToUnit:(unsigned int)arg1 inTable:(unsigned int)arg2 block:(id /* block */)arg3;
- (id /* block */)handlerForTable:(unsigned int)arg1;
- (id)init;
- (id)initWithStore:(struct __CSStore { }*)arg1;
- (id)initWithStore:(struct __CSStore { }*)arg1 useStandardTableHandlers:(bool)arg2;
- (void)setHandler:(id /* block */)arg1 forTable:(unsigned int)arg2;
- (void)setStandardTableHandlers;
- (const struct __CSStore { }*)store;
- (id)summaryOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (id)userInfo;

@end