//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKJSRestrictions, NSString;

@protocol IKJSDeviceSettings <JSExport>
@property(readonly, nonatomic) IKJSRestrictions *restrictions;
@property(readonly, retain, nonatomic) NSString *storefrontCountryCode;
@property(readonly, retain, nonatomic) NSString *language;
@end

