//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVImageProxy;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryLogoImageDownloader : NSObject
{
    TVImageProxy *_ratingImageProxy;
}

@property(retain, nonatomic) TVImageProxy *ratingImageProxy; // @synthesize ratingImageProxy=_ratingImageProxy;
- (void).cxx_destruct;
- (void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

