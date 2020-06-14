//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDebugDescriptionProviding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface SBTelephonySubscriptionInfo : NSObject <NSCopying, NSMutableCopying, BSDebugDescriptionProviding>
{
    NSString *_SIMLabel;
    NSString *_shortSIMLabel;
    NSString *_SIMStatus;
    unsigned long long _cellRegistrationStatus;
    unsigned long long _registrationStatus;
    unsigned long long _dataConnectionType;
    _Bool _preferredForDataConnections;
    _Bool _providingDataConnection;
    _Bool _registeredWithoutCellular;
    unsigned long long _signalStrengthBars;
    unsigned long long _maxSignalStrengthBars;
    NSString *_operatorName;
    NSString *_lastKnownNetworkCountryCode;
    unsigned long long _callForwardingIndicator;
    _Bool _networkReselectionNeeded;
    long long _registrationRejectionCauseCode;
}

@property(readonly, nonatomic) long long registrationRejectionCauseCode; // @synthesize registrationRejectionCauseCode=_registrationRejectionCauseCode;
@property(readonly, nonatomic, getter=isNetworkReselectionNeeded) _Bool networkReselectionNeeded; // @synthesize networkReselectionNeeded=_networkReselectionNeeded;
@property(readonly, nonatomic) unsigned long long callForwardingIndicator; // @synthesize callForwardingIndicator=_callForwardingIndicator;
@property(readonly, copy, nonatomic) NSString *lastKnownNetworkCountryCode; // @synthesize lastKnownNetworkCountryCode=_lastKnownNetworkCountryCode;
@property(readonly, copy, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(readonly, nonatomic) unsigned long long maxSignalStrengthBars; // @synthesize maxSignalStrengthBars=_maxSignalStrengthBars;
@property(readonly, nonatomic) unsigned long long signalStrengthBars; // @synthesize signalStrengthBars=_signalStrengthBars;
@property(readonly, nonatomic, getter=isRegisteredWithoutCellular) _Bool registeredWithoutCellular; // @synthesize registeredWithoutCellular=_registeredWithoutCellular;
@property(readonly, nonatomic, getter=isProvidingDataConnection) _Bool providingDataConnection; // @synthesize providingDataConnection=_providingDataConnection;
@property(readonly, nonatomic, getter=isPreferredForDataConnections) _Bool preferredForDataConnections; // @synthesize preferredForDataConnections=_preferredForDataConnections;
@property(readonly, nonatomic) unsigned long long dataConnectionType; // @synthesize dataConnectionType=_dataConnectionType;
@property(readonly, nonatomic) unsigned long long registrationStatus; // @synthesize registrationStatus=_registrationStatus;
@property(readonly, nonatomic) unsigned long long cellRegistrationStatus; // @synthesize cellRegistrationStatus=_cellRegistrationStatus;
@property(readonly, copy, nonatomic) NSString *SIMStatus; // @synthesize SIMStatus=_SIMStatus;
@property(readonly, copy, nonatomic) NSString *shortSIMLabel; // @synthesize shortSIMLabel=_shortSIMLabel;
@property(readonly, copy, nonatomic) NSString *SIMLabel; // @synthesize SIMLabel=_SIMLabel;
- (void).cxx_destruct;
- (id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

