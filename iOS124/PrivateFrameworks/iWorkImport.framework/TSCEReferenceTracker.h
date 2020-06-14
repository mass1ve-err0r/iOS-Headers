//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>

@class NSLock, NSMutableArray, NSString, TSCECalculationEngine;
@protocol TSCEReferenceTrackerDelegate;

__attribute__((visibility("hidden")))
@interface TSCEReferenceTracker : TSPObject <TSCEFormulaOwning>
{
    UUIDData_5fbc143e _ownerUUID;
    UUIDData_5fbc143e _baseOwnerUID;
    TSCECalculationEngine *_calculationEngine;
    _Bool _isRegisteredWithCalculationEngine;
    id <TSCEReferenceTrackerDelegate> _delegate;
    NSLock *_trackedRefsLock;
    NSMutableArray *_trackedReferences;
    unsigned long long _nextEmptyTrackedReferencesIndex;
    unsigned long long _numberOfTrackedReferences;
}

+ (struct TSUCellCoord)coordFromIndex:(unsigned long long)arg1;
+ (unsigned long long)indexFromCoord:(const struct TSUCellCoord *)arg1;
@property(nonatomic) UUIDData_5fbc143e baseOwnerUID; // @synthesize baseOwnerUID=_baseOwnerUID;
@property(nonatomic) __weak id <TSCEReferenceTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (_Bool)trackedReferencesExistForTable:(const UUIDData_5fbc143e *)arg1;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)cellRangeWasInserted:(const struct TSCERangeRef *)arg1;
- (id)trackedReferenceAtCoord:(struct TSUCellCoord)arg1;
- (void)setFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (unsigned long long)numberOfTrackedReferences;
- (id)allTrackedReferences;
- (void)endTrackingReference:(id)arg1;
- (id)beginTrackingReferenceWithSpanningRef:(const struct TSCESpanningRangeRef *)arg1;
- (id)beginTrackingReferenceWithRangeRef:(const struct TSCERangeRef *)arg1;
- (id)beginTrackingReferenceWithCellRef:(const struct TSCECellRef *)arg1;
- (void)beginTrackingReference:(id)arg1;
@property(readonly, nonatomic) TSCECalculationEngine *calculationEngine;
- (void)setCalculationEngine:(id)arg1;
- (void)unregisterFromCalcEngine;
- (void)registerWithCalcEngine:(_Bool)arg1;
- (void)willClose;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 delegate:(id)arg3;
- (id)objectToArchiveInDependencyTracker;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id)linkedResolver;
- (UUIDData_5fbc143e)ownerUID;
- (unsigned short)ownerKind;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

