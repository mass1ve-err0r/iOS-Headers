/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
 */

@interface FMFCore.FMFRefreshController : _TtCs12_SwiftObject {
    void apsConnectionHandler;
    void callbackInterval;
    void delegate;
    void firstRefreshCompleted;
    void initializedOnce;
    void isRefreshing;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastRefreshTime;
    void maxCallbackInterval;
    void minCallbackInterval;
    void refreshQueue;
    void refreshReason;
    void refreshTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  selectedFriend;
    void serverInteractionController;
    void tapContexts;
}

- (void)refreshTimerFired;

@end