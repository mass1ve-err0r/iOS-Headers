//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXSceneComponentAnimationHandler.h>

@class SXContainerComponentView;

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler
{
    SXContainerComponentView *_headerComponent;
    unsigned long long _attachmentType;
}

@property(nonatomic) unsigned long long attachmentType; // @synthesize attachmentType=_attachmentType;
@property(nonatomic) __weak SXContainerComponentView *headerComponent; // @synthesize headerComponent=_headerComponent;
- (void).cxx_destruct;
- (_Bool)shouldFinishAtEndOfScrollView;
- (double)factorForVisibileBounds:(struct CGRect)arg1 andAbsoluteComponentRect:(struct CGRect)arg2;
- (struct CGRect)fillContentFrameForScale:(double)arg1 andTranslation:(double)arg2;
- (void)updateAnimationWithFactor:(double)arg1;
- (void)ensureScalabilityOfHeaderComponentFill;
- (void)prepareAnimation;

@end

