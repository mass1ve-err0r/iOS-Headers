//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDChangeableInfo-Protocol.h>
#import <iWorkImport/TSDModelContainer-Protocol.h>
#import <iWorkImport/TSDMutableContainerInfo-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSString, TSDInfoGeometry, TSSPropertySetChangeDetails;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TSDContainerInfo : TSPObject <TSDMutableContainerInfo, TSKDocumentObject, TSDModelContainer, TSDChangeableInfo>
{
    TSDInfoGeometry *_geometry;
    NSObject<TSDContainerInfo> *_parentInfo;
    NSMutableArray *_childInfos;
    TSSPropertySetChangeDetails *_changes;
}

@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=_parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @synthesize geometry=_geometry;
- (void).cxx_destruct;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)endCollectingChanges;
- (void)willChangeProperties:(id)arg1;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeContainedModel:(id)arg1;
- (void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *containedModels;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, nonatomic) NSArray *childInfos;
- (id)copyWithContext:(id)arg1;
- (_Bool)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
- (_Bool)isSelectable;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (void)setPrimitiveGeometry:(id)arg1;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ContainerArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ContainerArchive *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsCollaborativeEditing;

@end

