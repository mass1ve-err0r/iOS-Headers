//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : NSObject
{
    PKPrinter *_printer;
    int _requestState;
    CDUnknownBlockType _completionHandler;
}

+ (id)requestInfoForPrinter:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int requestState; // @synthesize requestState=_requestState;
- (void).cxx_destruct;
- (void)requestPrintInfo;

@end

