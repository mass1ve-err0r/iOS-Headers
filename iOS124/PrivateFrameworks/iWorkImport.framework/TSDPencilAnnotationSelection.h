//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class NSDate, TSPObject;
@protocol TSKPencilAnnotation;

__attribute__((visibility("hidden")))
@interface TSDPencilAnnotationSelection : TSKSelection
{
    TSPObject<TSKPencilAnnotation> *_pencilAnnotation;
    NSDate *_pencilAnnotationAnchorStartDate;
}

+ (Class)archivedSelectionClass;
@property(retain, nonatomic) NSDate *pencilAnnotationAnchorStartDate; // @synthesize pencilAnnotationAnchorStartDate=_pencilAnnotationAnchorStartDate;
@property(readonly, nonatomic) TSPObject<TSKPencilAnnotation> *pencilAnnotation; // @synthesize pencilAnnotation=_pencilAnnotation;
- (void).cxx_destruct;
- (_Bool)canSaveSelectionToArchivedViewState;
- (_Bool)canRemainDuringSharedReadOnlyMode;
- (id)initWithPencilAnnotation:(id)arg1;

@end

