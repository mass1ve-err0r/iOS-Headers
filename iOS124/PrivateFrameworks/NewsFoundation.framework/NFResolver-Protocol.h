//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFoundation/NSObject-Protocol.h>

@class NFContext, NSString, Protocol;
@protocol NFResolver;

@protocol NFResolver <NSObject>
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2 context:(NFContext *)arg3;
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2 contextBlock:(void (^)(id <NFContext>))arg3;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(Protocol *)arg1 contextBlock:(void (^)(id <NFContext>))arg2;
- (id)resolveProtocol:(Protocol *)arg1;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2 contextBlock:(void (^)(id <NFContext>))arg3;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveClass:(Class)arg1 contextBlock:(void (^)(id <NFContext>))arg2;
- (id)resolveClass:(Class)arg1;
- (void)linkResolverWithLinkBlock:(void (^)(void (^)(void)))arg1;
- (id <NFResolver>)currentObjectGraphResolver:(unsigned long long)arg1;
@end

