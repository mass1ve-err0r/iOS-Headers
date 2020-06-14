//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSSet;

@interface MNAudioOutputSetting : NSObject <NSSecureCoding>
{
    NSSet *_pickableRoutes;
    _Bool _selected;
    _Bool _selectedForSystem;
    _Bool _hfpPreference;
}

+ (_Bool)isBluetoothRoute:(id)arg1;
+ (id)macAddressForRoute:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool selectedForSystem; // @synthesize selectedForSystem=_selectedForSystem;
- (void).cxx_destruct;
- (void)setHfpPreference:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hfpPreference;
- (void)setSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 shouldSetHFPPreference:(_Bool)arg2;
- (_Bool)selectedForRouteSelection:(unsigned long long)arg1;
- (_Bool)isPicked;
- (_Bool)_isPicked:(id)arg1;
- (void)setPicked:(_Bool)arg1;
- (_Bool)_pickRoute:(id)arg1;
- (_Bool)pickedStateConsistentWithHFPPreference;
- (id)pickableRouteForHFPPreference:(_Bool)arg1;
- (_Bool)_isHFPRoute:(id)arg1;
- (_Bool)allowHFPPreferenceSelectionForRouteSelection:(unsigned long long)arg1;
- (_Bool)settingSupportsBluetoothHFP;
- (_Bool)settingForDefaultRoute;
- (_Bool)settingForBluetoothComboDevice;
- (_Bool)settingForBluetoothDevice;
- (_Bool)isEqualToSetting:(id)arg1;
- (id)macAddress;
- (id)routeUID;
- (id)description;
- (_Bool)containsPickableRoute:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPickableRoutes:(id)arg1;
- (id)initWithPickableRoute:(id)arg1;

@end

