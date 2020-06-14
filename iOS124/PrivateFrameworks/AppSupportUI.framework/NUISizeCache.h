//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUISizeCache : NSObject
{
    struct nui_size_cache _sizeCache;
    _Bool _threadSafe;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)insertSize:(struct CGSize)arg1 forTargetSize:(struct CGSize)arg2;
- (_Bool)getSize:(struct CGSize *)arg1 forItem:(id)arg2 targetSize:(struct CGSize)arg3;
- (void)dealloc;
- (id)initForAsynchronousAccess:(_Bool)arg1;

@end

