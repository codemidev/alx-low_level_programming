<?php
require __DIR__ . '/vendor/autoload.php';
use Twilio\Rest\Client;

// Your Account SID and Auth Token from twilio.com/console
// $account_sid = 'ACdeb383bbeb76c847cde293055c2fe5b1';
// $auth_token = 'your_auth_token';
// // In production, these should be environment variables. E.g.:
// // $auth_token = $_ENV["3dc1ff2c856c31688f9f850037235be0"]
//
// // A Twilio number you own with Voice capabilities
// $twilio_number = "+18594702978";
//
// // Where to make a voice call (your cell phone?)
// $to_number = "+2348138919661";
//
// $client = new Client($account_sid, $auth_token);
// $client->account->calls->create(  
//     $to_number,
//         $twilio_number,
//             array(
//                     "url" => "http://demo.twilio.com/docs/voice.xml"
//                         )
//                         );
//
//
