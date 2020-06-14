//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNAutocompleteResultFactory : NSObject
{
    NSString *_preferredDomain;
    NSString *_sendingAddress;
}

+ (id)factoryWithPriorityDomain:(id)arg1 sendingAddress:(id)arg2;
- (void).cxx_destruct;
- (void)applyLastSendingAddressBitToResult:(id)arg1;
- (void)applyPreferredDomainBitToResult:(id)arg1;
- (void)applySearchContextToResult:(id)arg1;
- (id)duetResultWithDisplayName:(id)arg1 value:(id)arg2 contactIdentifier:(id)arg3;
- (id)calendarServerResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3;
- (id)directoryServerResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3;
- (id)suggestedResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3;
- (id)infrequentRecentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5 group:(_Bool)arg6 completesChosenGroup:(_Bool)arg7;
- (id)frequentRecentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4 group:(_Bool)arg5 completesChosenGroup:(_Bool)arg6;
- (id)recentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5 group:(_Bool)arg6 completesChosenGroup:(_Bool)arg7;
- (id)localGroupResultWithDisplayName:(id)arg1 groupIdentifier:(id)arg2 membersProvider:(CDUnknownBlockType)arg3;
- (id)localGroupResultWithDisplayName:(id)arg1 groupIdentifier:(id)arg2;
- (id)localContactResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 contactIdentifier:(id)arg4;
- (id)initWithPriorityDomain:(id)arg1 sendingAddress:(id)arg2;

@end

