//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject
{
    NSArray *_merchantIdentifiers;
    _Bool _ignoreMerchantIdentifiers;
}

@property(readonly, nonatomic) _Bool ignoreMerchantIdentifiers; // @synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers;
- (void).cxx_destruct;
- (void)_probeEntitlementsWithToken:(CDStruct_6ad76789)arg1;
@property(readonly, nonatomic) _Bool hasMerchantIdentifiers;
- (_Bool)hasMerchantIdentifier:(id)arg1;
- (id)initWithToken:(CDStruct_6ad76789)arg1;

@end

