//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseListener.h"

@class NSString;

@interface ODRBaseListener : BaseListener
{
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, nonatomic) NSString *odrServiceName;
@property(readonly, nonatomic) NSString *odrEntitlementName;
- (void)configureClientWithConnection:(id)arg1;

@end

