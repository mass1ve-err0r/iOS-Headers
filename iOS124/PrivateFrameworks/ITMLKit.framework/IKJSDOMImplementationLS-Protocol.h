//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMLSInput, IKDOMLSParser, IKDOMLSSerializer, NSString;

@protocol IKJSDOMImplementationLS <JSExport>
@property(readonly, getter=asynchronousMode) long long MODE_ASYNCHRONOUS;
@property(readonly, getter=synchronousMode) long long MODE_SYNCHRONOUS;
- (IKDOMLSInput *)createLSInput;
- (IKDOMLSSerializer *)createLSSerializer;
- (IKDOMLSParser *)createLSParser:(long long)arg1:(NSString *)arg2;
@end

