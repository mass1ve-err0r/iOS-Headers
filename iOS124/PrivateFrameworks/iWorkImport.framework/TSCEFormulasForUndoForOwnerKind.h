//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulasForUndoForOwnerKind : NSObject <NSCopying>
{
    unsigned short _ownerKind;
    struct unordered_map<TSCECellRef, TSCEFormula, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, TSCEFormula>>> _formulas;
    struct unordered_set<TSCECellRef, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<TSCECellRef>> _nonFormulaCells;
    unordered_set_c6a929bd _formulaOwnerUIDs;
}

@property(nonatomic) unsigned short ownerKind; // @synthesize ownerKind=_ownerKind;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)foreachFormula:(CDUnknownBlockType)arg1;
- (const unordered_set_c6a929bd *)formulaOwnerUIDs;
- (void)addFormula:(struct TSCEFormula *)arg1 atCellRef:(const struct TSCECellRef *)arg2;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

