//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TXRDeferredMipmapInfo : NSObject
{
    NSMutableArray *_elements;
}

@property(readonly, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
- (void).cxx_destruct;
- (id)initWithArrayLength:(unsigned long long)arg1 cubemap:(_Bool)arg2;

@end

