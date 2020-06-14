//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSDeviceSettings-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKJSRestrictions, NSString;

@protocol _IKJSDeviceSettings <IKJSDeviceSettings, JSExport>
@property(readonly, nonatomic) struct CGSize screen;
@property(readonly, nonatomic) IKJSRestrictions *Restrictions;
@property(readonly, nonatomic) struct CGSize Screen;
@property(readonly, retain, nonatomic) NSString *preferredVideoPreviewFormat;
@property(readonly, retain, nonatomic) NSString *preferredVideoFormat;
@property(readonly, retain, nonatomic) NSString *name;
@end

