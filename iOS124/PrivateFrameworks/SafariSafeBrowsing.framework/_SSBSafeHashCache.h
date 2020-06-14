//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SSBSafeHashCache : NSObject
{
    struct unique_ptr<SafeBrowsing::SafeHashCache, std::__1::default_delete<SafeBrowsing::SafeHashCache>> _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (_Bool)containsHashesForURL:(id)arg1;
- (void)addHashesForURL:(id)arg1;
- (id)init;

@end

