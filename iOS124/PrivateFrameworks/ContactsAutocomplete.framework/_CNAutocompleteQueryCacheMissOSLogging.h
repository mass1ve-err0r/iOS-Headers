//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteQueryCacheMissLogging-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNAutocompleteQueryCacheMissOSLogging : NSObject <CNAutocompleteQueryCacheMissLogging>
{
    NSObject<OS_os_log> *_os_log;
}

@property(readonly) NSObject<OS_os_log> *os_log; // @synthesize os_log=_os_log;
- (void).cxx_destruct;
- (void)didReturnCacheFalsePositives:(id)arg1;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

