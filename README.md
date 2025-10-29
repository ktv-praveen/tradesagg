◦ Developed KDB application to generate Dynamic aggressive Pause values using real time quote data.
It generates the wait time before executing the next order and publishes the dynamic aggressive pause
to subscribers real time.
◦ Set up india low latency tick by tick feed from refinitiv, this helps Quants better analyze Indian market.
◦ Implemented a Cancellation Rate Calculator CEP for china markets to monitor High frequency trading. The generated alerts are send through api trigger to a restricted communication channel.
◦ Enhanced the data replay efficiency of a low latency feed, The tplog could reach a size of up to 700 GB.
Optimized the replay to reduce the replay time by 10 hours by developing Segmented tplog Replay.
◦ Developed a new KDB library for DB maintenance for the cloud data as KX doesn’t provide DB
maintenance of the data that is present as objects yet.
• Senior Software Engineer - HSBC Technology India
(February’22 - April’24)
◦ Cost optimization with KX insights core: Worked end to end on transition of KDB HDBs from persistent disk to GCP buckets using KX insights core and introduced caching in the HDBs despite limited
documentation, set up monitoring to the campus and cloud HDBs, This resulted to a cost saving of
$13,000 per month.
◦ Built Docker images specifically designed for GCP VMs to accommodate the storage of our Historical
Databases (HDBs)
◦ Developed a timer job to back up sym files on a regular basis whenever there is a change in sym file
