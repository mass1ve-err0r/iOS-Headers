//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarKit/NSObject-Protocol.h>

@class NSString;

@protocol CRCarPlayNavigationOwnersService <NSObject>
- (void)fetchNavigationOwnerWithReply:(void (^)(unsigned long long))arg1;
- (void)removeNavigationOwnerWithIdentifier:(NSString *)arg1;
- (void)addNavigationOwnerWithIdentifier:(NSString *)arg1;
@end

