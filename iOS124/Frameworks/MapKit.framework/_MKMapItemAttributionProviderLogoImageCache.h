//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface _MKMapItemAttributionProviderLogoImageCache : NSObject
{
    NSCache *_cache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (id)init;

@end

