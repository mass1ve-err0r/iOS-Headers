//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol-Protocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport-Protocol.h>
#import <iWorkImport/TSCHStyleOwning-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSString, NSUUID, TSCHChartAxis, TSCHChartAxisID, TSCHChartModel, TSCHReferenceLineNonStyle, TSCHReferenceLineStyle;

__attribute__((visibility("hidden")))
@interface TSCHReferenceLine : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel *mModel;
    TSCHChartAxisID *mAxisID;
    TSCHReferenceLineStyle *mStyle;
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
    unsigned long long mStyleSwapIndex;
}

+ (id)p_lineLabelForType:(unsigned long long)arg1;
+ (id)defaultNonStyleWithContext:(id)arg1 referenceLineType:(unsigned long long)arg2 axis:(id)arg3;
+ (unsigned long long)styleSwapOrStyleOwnerIndexFromAxisID:(id)arg1 refLineIndex:(unsigned long long)arg2;
+ (unsigned long long)refLineIndexFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1;
+ (id)axisIDFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1;
+ (unsigned long long)maxNumberOfReferenceLinesOfType:(unsigned long long)arg1;
+ (unsigned long long)maxNumberOfReferenceLines;
+ (unsigned char)styleOwnerPathType;
@property(readonly, copy, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
- (void).cxx_destruct;
- (void)setStyle:(id)arg1 nonStyle:(id)arg2;
- (id)nonstyle;
- (id)style;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long styleSwapIndex;
@property(readonly, nonatomic) __weak TSCHChartAxis *axis;
- (id)model;
- (id)context;
- (id)drawableInfo;
- (id)chartInfo;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (_Bool)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (_Bool)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (_Bool)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (id)p_genericToDefaultPropertyMap;
- (void)clearParent;
@property(readonly, nonatomic) unsigned long long refLineType; // @dynamic refLineType;
@property(readonly, nonatomic) _Bool valueLabelShowing; // @dynamic valueLabelShowing;
@property(readonly, nonatomic) _Bool labelShowing; // @dynamic labelShowing;
@property(readonly, nonatomic) _Bool lineShowing; // @dynamic lineShowing;
- (id)localizedTypeName;
- (double)referenceLineAxisValue;
- (void)dealloc;
- (id)initWithModel:(id)arg1 axisID:(id)arg2 index:(unsigned long long)arg3 uuid:(id)arg4;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

