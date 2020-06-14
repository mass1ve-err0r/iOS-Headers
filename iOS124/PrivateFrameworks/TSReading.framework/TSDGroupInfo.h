//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDDrawableInfo.h>

#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDMutableContainerInfo-Protocol.h>
#import <TSReading/TSDSelectionStatisticsContributor-Protocol.h>
#import <TSReading/TSKDocumentObject-Protocol.h>

@class NSMutableArray, NSObject, NSString, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor>
{
    NSMutableArray *mChildInfos;
    _Bool mIsInDocument;
}

+ (id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(_Bool *)arg4;
+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3;
+ (id)groupGeometryFromChildrenInfos:(id)arg1;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)ensureGeometryFitsChildren;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (void)removeAllChildrenInDocument:(_Bool)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (id)childInfos;
- (id)allNestedChildrenInfosIncludingGroups;
- (id)onlyChild;
- (id)allNestedChildrenInfos;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (_Bool)aspectRatioLocked;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end

