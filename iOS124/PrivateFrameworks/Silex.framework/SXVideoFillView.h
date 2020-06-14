//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXFillView.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXClippingView, SXImageResource, SXImageView, SXVideoFill, SXVideoFillPlayerView;

@interface SXVideoFillView : SXFillView <SXViewportChangeListener>
{
    SXVideoFill *_videoFill;
    SXClippingView *_clippingView;
    SXVideoFillPlayerView *_playerView;
    SXImageResource *_imageResource;
    SXImageView *_imageView;
}

@property(readonly, nonatomic) SXImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SXImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property(retain, nonatomic) SXVideoFillPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) SXClippingView *clippingView; // @synthesize clippingView=_clippingView;
@property(readonly, nonatomic) SXVideoFill *videoFill; // @synthesize videoFill=_videoFill;
- (void).cxx_destruct;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)contentFrame;
- (void)reset;
- (void)pause;
- (void)play;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)load;
- (void)dealloc;
- (id)initWithVideoFill:(id)arg1 DOMObjectProvider:(id)arg2 imageViewFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

