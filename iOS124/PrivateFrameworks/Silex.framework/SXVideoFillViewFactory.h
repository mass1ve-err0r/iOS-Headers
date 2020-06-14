//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoFillViewFactory-Protocol.h>

@class NSString;
@protocol SXDOMObjectProviding, SXImageViewFactory;

@interface SXVideoFillViewFactory : NSObject <SXVideoFillViewFactory>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXImageViewFactory> _imageViewFactory;
}

@property(readonly, nonatomic) id <SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
- (void).cxx_destruct;
- (id)createVideoFillViewForVideoFill:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

