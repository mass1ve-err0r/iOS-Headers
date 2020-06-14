/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioPowerSpectrumSource : VCObject <VCAudioIOSink> {
    struct _VCAudioPowerSpectrumSourceRealtimeContext { 
        struct _VCSingleLinkedList { 
            struct _VCSingleLinkedListEntry {} *head; 
            bool initialized; 
            int (*compare)(); 
        } powerSpectrumSinks; 
        struct opaqueCMSimpleQueue {} *eventQueue; 
        id powerSpectrumSourceDelegate; 
    }  _realtimeContext;
    long long  _streamToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _VCAudioPowerSpectrumSourceRealtimeContext { struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_1_1_1; bool x_1_1_2; int (*x_1_1_3)(); } x1; struct opaqueCMSimpleQueue {} *x2; id x3; }*realtimeContext;
@property (nonatomic, readonly) long long streamToken;
@property (readonly) Class superclass;

- (void)cleanupAudioPowerSpectrumSinks;
- (void)cleanupQueue:(struct opaqueCMSimpleQueue {}**)arg1;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (struct _VCAudioPowerSpectrumSourceRealtimeContext { struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_1_1_1; bool x_1_1_2; int (*x_1_1_3)(); } x1; struct opaqueCMSimpleQueue {} *x2; id x3; }*)realtimeContext;
- (void)registerAudioPowerSpectrumSink:(id)arg1 callback:(int (*)arg2;
- (long long)streamToken;
- (void)unregisterAudioPowerSpectrumSink:(id)arg1;

@end