//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutOperation, SXLayoutTask;
@protocol SXDOMObjectProviding;

@protocol SXLayoutOperationFactory <NSObject>
- (SXLayoutOperation *)layoutOperationWithTask:(SXLayoutTask *)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2;
@end

