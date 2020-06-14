//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMXPathResult-Protocol.h>

@class IKDOMNode, NSArray, NSString;

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult>
{
    long long _type;
    NSArray *_nodes;
}

@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)snapshotItem:(long long)arg1;
- (id)iterateNext;
@property(readonly, nonatomic) long long snapshotLength;
@property(readonly, nonatomic) _Bool invalidIteratorState;
@property(readonly, nonatomic) __weak IKDOMNode *singleNodeValue;
@property(readonly, nonatomic) _Bool booleanValue;
@property(readonly, nonatomic) __weak NSString *stringValue;
@property(readonly, nonatomic) long long numberValue;
@property(readonly, nonatomic) long long resultType;
- (id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3;

@end

