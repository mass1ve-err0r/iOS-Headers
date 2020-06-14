//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKPencilAnnotation-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>

@class NSString, TSDDrawableInfo, TSDPencilAnnotationStorage, TSKPKDrawing;

__attribute__((visibility("hidden")))
@interface TSDPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSKPencilAnnotation>
{
    TSDPencilAnnotationStorage *_pencilAnnotationStorage;
    TSDDrawableInfo *_parent;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) __weak TSDDrawableInfo *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PencilAnnotationArchive *)arg1 unarchiver:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic) NSString *uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TSKPKDrawing *drawing; // @dynamic drawing;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

