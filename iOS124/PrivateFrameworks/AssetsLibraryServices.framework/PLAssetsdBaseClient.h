//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLXPCProxyCreating;

@interface PLAssetsdBaseClient : NSObject
{
    id <PLXPCProxyCreating> _proxyFactory;
}

@property(readonly) id <PLXPCProxyCreating> proxyFactory; // @synthesize proxyFactory=_proxyFactory;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;

@end

