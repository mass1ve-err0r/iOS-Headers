//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITargetedDragPreview;

@interface TSWPDragItem : NSObject
{
    UITargetedDragPreview *_targetedDragPreview;
    struct CGRect _canvasRect;
}

@property(readonly, nonatomic) struct CGRect canvasRect; // @synthesize canvasRect=_canvasRect;
@property(readonly, retain, nonatomic) UITargetedDragPreview *targetedDragPreview; // @synthesize targetedDragPreview=_targetedDragPreview;
- (id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg1 icc:(id)arg2 canvasView:(id)arg3 boundsRect:(struct CGRect)arg4;
- (void)dealloc;
- (id)initWithDragPreview:(id)arg1 canvasRect:(struct CGRect)arg2;

@end

