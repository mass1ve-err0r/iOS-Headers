//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNull.h>

#import <SiriCore/SiriCoreSQLiteValue-Protocol.h>

@class NSString;

@interface NSNull (SiriCoreSQLiteValue) <SiriCoreSQLiteValue>
- (long long)siriCoreSQLiteValue_type;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

