//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;
@protocol LAUIPearlGlyphViewDelegate;

@interface LAUIPearlGlyphView : UIView
{
    _Bool _hideFace;
    _Bool _paused;
    _Bool _feedbackEnabled;
    _Bool _wireframeEnabled;
    long long _style;
    UIColor *_finishedColor;
    long long _state;
    CALayer *_contentLayer;
    id <LAUIPearlGlyphViewDelegate> _delegate;
    CDStruct_14d5dc5e _modelTransform;
}

+ (id)sharedStaticResources;
@property(nonatomic) CDStruct_14d5dc5e modelTransform; // @synthesize modelTransform=_modelTransform;
@property(nonatomic, getter=isWireframeEnabled) _Bool wireframeEnabled; // @synthesize wireframeEnabled=_wireframeEnabled;
@property(nonatomic) __weak id <LAUIPearlGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) _Bool feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool hideFace; // @synthesize hideFace=_hideFace;
@property(readonly, nonatomic) UIColor *finishedColor; // @synthesize finishedColor=_finishedColor;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

