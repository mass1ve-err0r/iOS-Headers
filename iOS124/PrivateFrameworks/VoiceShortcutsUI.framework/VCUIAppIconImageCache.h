//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface VCUIAppIconImageCache : NSObject
{
    NSCache *_appIconImagesCache;
}

+ (id)sharedAppIconImageCache;
@property(retain, nonatomic) NSCache *appIconImagesCache; // @synthesize appIconImagesCache=_appIconImagesCache;
- (void).cxx_destruct;
- (id)cachedAppIconImageForKey:(id)arg1;
- (void)setCachedAppIconImage:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

