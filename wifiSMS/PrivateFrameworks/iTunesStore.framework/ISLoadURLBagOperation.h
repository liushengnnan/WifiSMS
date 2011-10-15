/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISURLBagContext;



@interface ISLoadURLBagOperation : ISOperation <ISURLOperationDelegate>
{
    ISURLBagContext *_context;
    BOOL _shouldWaitForNetwork;
}

@property BOOL shouldWaitForNetwork; /* unknown property attribute: V_shouldWaitForNetwork */
@property(readonly) ISURLBagContext *context; /* unknown property attribute: V_context */


- (id)init;
- (id)initWithBagContext:(id)arg1;
- (void)dealloc;
- (void)run;
- (id)uniqueKey;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)_copyBootstrapURLs;
- (id)_copyProductionBootstrapURLs;
- (id)_copySandboxBootstrapURLs;
- (void)_loadURLBagFromURL:(id)arg1;
- (BOOL)shouldWaitForNetwork;
- (void)setShouldWaitForNetwork:(BOOL)arg1;
- (id)context;

@end